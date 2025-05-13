///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/ModsComponentData.h>
#include <fb/VariationLink.h>

namespace fb {
	class MeshVariationEntry;
}

namespace fb {
	class ModsCloakComponentData : public ModsComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ModsCloakComponentData"); }
		virtual ~ModsCloakComponentData() override {}
		ModsCloakComponentData() {
		};

		VariationLink m_variationLink; // 0xD0 (208)
		CtrRef<MeshVariationEntry> m_objectVariationEntry; // 0xE0 (224)
	}; // 0xF0 (240)
}

