#pragma once

#include "BaseElements/BaseExpr.h"

class LessExpr : public BaseExpr
{
public:
  LessExpr(BaseExpr *p_lhs, BaseExpr *p_rhs);
  ~LessExpr() override;

  void Accept(Visitor &visitor) override;

  BaseExpr* GetLeft() const;
  BaseExpr* GetRight() const;

private:
  BaseExpr *p_lhs;
  BaseExpr *p_rhs;
};
