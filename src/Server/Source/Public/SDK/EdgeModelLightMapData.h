///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/DataContainer.h>
#include <fb/Vec4.h>

namespace fb {
	class EdgeModelLightMapData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EdgeModelLightMapData"); }
		virtual ~EdgeModelLightMapData() override {}
		EdgeModelLightMapData() {
		};

		Array<Vec4> m_lightMapUvs; // 0x10 (16)
	}; // 0x18 (24)
}

