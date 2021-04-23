#pragma once

#include "BaseElements/BaseExecBlock.h"

#include <vector>

class ExecCode : public BaseExecBlock {
  public:
    std::vector<BaseExecBlock*> program_lines_;

    ExecCode() = default;
    explicit ExecCode(BaseExecBlock* line);
    void Accept(Visitor& visitor) override;
    ~ExecCode() override;
    
    void addBaseBlock(BaseExecBlock* line);
};

