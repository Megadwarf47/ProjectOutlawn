///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>
#include <fb/VaseRandomData.h>

namespace fb {
	class VaseRandomDataDefinition : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VaseRandomDataDefinition"); }
		virtual ~VaseRandomDataDefinition() override {}
		VaseRandomDataDefinition() {
		};

		Array<VaseRandomData> m_vaseData; // 0x18 (24)
	}; // 0x20 (32)
}

