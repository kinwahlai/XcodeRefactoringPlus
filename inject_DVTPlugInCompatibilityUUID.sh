#! /usr/bin/env sh

# assumption: Xcode is always installed at /Applications

# STEPS:
# use plistbuddy to read $INFOPLIST_FILE::DVTPlugInCompatibilityUUIDs array
# get new DVTPlugInCompatibilityUUID [ defaults read /Applications/Xcode.app/Contents/Info DVTPlugInCompatibilityUUID ]
# check new DVTPlugInCompatibilityUUID already in the array
  # YES: end
  # NO: use plistbuddy to write the new DVTPlugInCompatibilityUUID into the array and write out to file

get_xcode_env_val() {
  xcodepath=$("xcode-select" -print-path);
  var=$($path/usr/bin/xcodebuild -showBuildSettings | sed -n -e 's/'"$1"' = \(.*\)/\1/p');
  echo $var;
}

get_new_DVTPlugInCompatibilityUUID() {
  var=$(defaults read "$1/Contents/Info" DVTPlugInCompatibilityUUID)
  echo $var;
}

read_DVTPlugInCompatibilityUUIDs() {
  var=$(/usr/libexec/PlistBuddy -c "Print DVTPlugInCompatibilityUUIDs" "$1")
  echo $var;
}

check_new_DVTPlugInCompatibilityUUID_added() {
  case "$1" in
      *"$2"* )
        # "New DVTPlugInCompatibilityUUID added";
        echo 1;
      ;;
      * )
        # "New DVTPlugInCompatibilityUUID not added";
        echo 0;
      ;;
  esac
}

add_new_DVTPlugInCompatibilityUUID() {
  $(/usr/libexec/PlistBuddy -c "Add :DVTPlugInCompatibilityUUIDs: string  $2" "$1")
  echo "The new DVTPlugInCompatibilityUUID [$2] added"
}
echo "=== $0 starts executing ==="

INFOPLIST_FILE=$(get_xcode_env_val "INFOPLIST_FILE")
echo "Currently working with this info plist file ==> $INFOPLIST_FILE"

for xcode in /Applications/Xcode*.app; do
  COMPATIBILITYUUID_ARRAY=$(read_DVTPlugInCompatibilityUUIDs "${INFOPLIST_FILE}")

  NEW_COMPATIBILITYUUID=$(get_new_DVTPlugInCompatibilityUUID "$xcode")
  echo "from ==> [$xcode] , found DVTPlugInCompatibilityUUID [$NEW_COMPATIBILITYUUID]"

  IS_ADDED=$(check_new_DVTPlugInCompatibilityUUID_added "$COMPATIBILITYUUID_ARRAY" "$NEW_COMPATIBILITYUUID")

  if [[ $IS_ADDED == 0 ]]; then
    echo "DVTPlugInCompatibilityUUID is not in DVTPlugInCompatibilityUUIDs"
    add_new_DVTPlugInCompatibilityUUID "$INFOPLIST_FILE" "$NEW_COMPATIBILITYUUID"
  else
    echo "The new DVTPlugInCompatibilityUUID [$NEW_COMPATIBILITYUUID] already added"
  fi
done

echo "=== $0 finish executed ==="
