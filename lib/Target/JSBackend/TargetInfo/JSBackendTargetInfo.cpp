//===-- CBackendTargetInfo.cpp - CBackend Target Implementation -----------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#include "JSTargetMachine.h"
#include "llvm/Module.h"
#include "llvm/Support/TargetRegistry.h"
using namespace llvm;

Target llvm::TheJSBackendTarget;

extern "C" void LLVMInitializeJSBackendTargetInfo() {
  RegisterTarget<> X(TheJSBackendTarget, "js", "JS backend");
}

extern "C" void LLVMInitializeJSBackendTargetMC() {}
