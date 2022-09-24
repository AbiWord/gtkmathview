// Copyright (C) 2000-2007, Luca Padovani <padovani@sti.uniurb.it>.
// 
// This file is part of GtkMathView, a flexible, high-quality rendering
// engine for MathML documents.
// 
// GtkMathView is free software; you can redistribute it and/or modify it
// under the terms of the GNU Lesser General Public License as published
// by the Free Software Foundation; either version 3 of the License, or
// (at your option) any later version.
// 
// GtkMathView is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#ifndef __MathMLMarkNode_hh__
#define __MathMLMarkNode_hh__

#include "token.hh"
#include "MathMLTextNode.hh"

class GMV_MathView_EXPORT MathMLMarkNode : public MathMLTextNode
{
protected:
  MathMLMarkNode(TokenId = T__NOTVALID);
  virtual ~MathMLMarkNode();

public:
  static SmartPtr<MathMLMarkNode> create(TokenId t)
  { return new MathMLMarkNode(t); }
  
  virtual AreaRef format(class FormattingContext&);

  TokenId GetAlignmentEdge(void) const { return edge; }

private:
  TokenId edge;
};

#endif // __MathMLMarkNode_hh__
