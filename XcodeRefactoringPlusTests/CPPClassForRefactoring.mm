//
//  CPPClassForRefactoring.cpp
//  XcodeRefactoringPlus
//
//  Created by Darren Lai on 4/5/15.
//  Copyright (c) 2015 KinWah. All rights reserved.
//

#include <stdio.h>
#include <string>

class FooBar {
  
public:
  void acceptARange(NSRange range) {}
  
  void bar() {
    acceptARange(NSMakeRange(0, 0));
  }
  
  void foobarbar(){
    // we want to make barbar inline
    std::string barbar = "1234";
    std::string foobar = "abcd";
    foobar.append(barbar);
  }
};