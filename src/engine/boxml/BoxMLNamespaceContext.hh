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

#ifndef __BoxMLNamespaceContext_hh__
#define __BoxMLNamespaceContext_hh__

#include "gmv_defines.h"
#include "NamespaceContext.hh"

class GMV_MathView_EXPORT BoxMLNamespaceContext : public NamespaceContext
{
protected:
  BoxMLNamespaceContext(const SmartPtr<class View>&,
			const SmartPtr<class BoxGraphicDevice>&);
  virtual ~BoxMLNamespaceContext();

public:
  static SmartPtr<BoxMLNamespaceContext> create(const SmartPtr<class View>& view,
						const SmartPtr<class BoxGraphicDevice>& device)
  { return new BoxMLNamespaceContext(view, device); }

  SmartPtr<class BoxGraphicDevice> getGraphicDevice(void) const;

private:
  SmartPtr<class BoxGraphicDevice> device;
};

#endif // __BoxMLNamespaceContext_hh__
