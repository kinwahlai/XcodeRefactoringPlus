import Foundation

class FooBar {
  func foo() {
    // we want to extract inline StringFormat into local variable
    var barbar:String = ""
    barbar.stringByAppendingString(String(format: "%d", 1235))
  }

  func acceptARange(range:NSRange) {}

  func bar() {
    // we want to extract inline NSMakeRange(0,0) into local variable
    self.acceptARange(NSMakeRange(0,0))
  }

  func foobarbar() {
    // we want to make barbar inline
    var barbar:String = String(format:"%d",1234)
    var foobar:String = ""
    foobar.stringByAppendingString(barbar)
  }
}
