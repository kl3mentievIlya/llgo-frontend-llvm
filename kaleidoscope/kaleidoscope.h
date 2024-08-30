#ifndef __KALEIDOSCOPE_H__
#define __KALEIDOSCOPE_H__

#include "llvm/ADT/APFloat.h"
#include "llvm/ADT/STLExtras.h"
#include "llvm/IR/BasicBlock.h"
#include "llvm/IR/Constants.h"
#include "llvm/IR/DerivedTypes.h"
#include "llvm/IR/Function.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Type.h"
#include "llvm/IR/Verifier.h"

#include <map>

extern llvm::LLVMContext TheContext;

extern llvm::IRBuilder<> Builder;

extern std::unique_ptr<llvm::Module> TheModule;

extern std::map<std::string, llvm::Value *> NamedValues;

#endif
