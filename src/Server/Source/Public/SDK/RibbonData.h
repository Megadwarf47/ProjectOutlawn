///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/RibbonPointData.h>
#include <fb/VisualVectorShapeData.h>

namespace fb {
	class RibbonData : public VisualVectorShapeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RibbonData"); }
		virtual ~RibbonData() override {}
		RibbonData() {
		};

		Array<RibbonPointData> m_ribbonPoints; // 0x40 (64)
	}; // 0x48 (72)
}

