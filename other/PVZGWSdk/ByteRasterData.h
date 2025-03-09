///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/RasterQuadtreeData.h>

namespace fb {
	class ByteRasterData : public RasterQuadtreeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ByteRasterData"); }
		virtual ~ByteRasterData() override {}
		ByteRasterData() {
		};

	}; // 0x18 (24)
}

