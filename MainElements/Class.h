#ifndef PARSEREXAMPLE_BASECLASS_H
#define PARSEREXAMPLE_BASECLASS_H

#include "Visitors/Visitor.h"
#include "ExecBlocks/VariableDeclaration.h"
#include "MainElements/MethodDeclaration.h"
#include "ExecBlocks/VariableDeclaration.h"
#include "SubsidiaryClasses/DeclarationList.h"

class Class {
  public:
    virtual void Accept(Visitor& visitor);
    virtual ~Class();
    Class(std::string name, Class* parent_class);
    void initialize(DeclarationList* decl_list);
    void addMethod(MethodDeclaration* declaration);
    void addVariable(VariableDeclaration* declaration);

  protected:
    std::string name_;
    Class* parent_class_;
    std::vector<VariableDeclaration*> variables_;
    std::vector<MethodDeclaration*> methods_;
};

#endif //PARSEREXAMPLE_BASECLASS_H