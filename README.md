## Xcode Refactoring Plus

I miss the refactoring function in eclipse so i create this plugin to extend the
 current refactoring function of xcode to functionality like move line, delete
 line, duplicate line.

####Delete Line (**cmd+D**)
Delete the line or current selected lines.

####Duplicate Line (**alt+cmd+down**)
Duplicate the line or current selected lines.

####Move Line (**alt+down** | **alt+up**)
Move the line or current selected lines

####Extract Local Variable (**alt+cmd+l**)
Extract the inline code into local variable within the method

*NOTES*: I choose to use placeholder token as solution is to avoid doing any UI implementation for now.
```
-(void) bar {
    **type** **variable** = NSMakeRange(10, 10);
    [self acceptARange:**variable**];
}

You will need to update the placeholder token manually.
```
---
## Installation
####Option 1
* clone this repo
* build the plugin and it should install at the right directory

####Option 2
* install from alcatraz
* restart xcode

####Notes:
If you cannot use the keystroke, kindly resolve conflict keybinding in
System Preferences -> Keyboard -> Shortcuts -> App Shortcuts
#####Alternative:
You can download my keybinding file [XcodeRefactoringPlus.idekeybindings](https://github.com/kinwahlai/XcodeRefactoringPlus/blob/master/XcodeRefactoringPlus.idekeybindings) and then put it at *~/Library/Developer/Xcode/UserData/KeyBindings/XcodeRefactoringPlus.idekeybindings*


---
## TODO
+ Refactor textview manipulation login into separate class

####Done
+ ~~Package plugin for Alcatraz xcode plugin manager~~
+ ~~**New Feature : ** Extract Local variable.~~

---
## License
```
// Copyright (c) 2014 KinWah
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
```
