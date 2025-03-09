///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/RasterQuadtreeData.h>

namespace fb {
	class RGBRasterData : public RasterQuadtreeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RGBRasterData"); }
		virtual ~RGBRasterData() override {}
		RGBRasterData() {
		};

	}; // 0x18 (24)
}

