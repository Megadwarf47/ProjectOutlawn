///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/ModsComponentData.h>

namespace fb {
	class ComponentModInputRestrictionAsset;
}

namespace fb {
	class ModsInputRestrictionComponentData : public ModsComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ModsInputRestrictionComponentData"); }
		virtual ~ModsInputRestrictionComponentData() override {}
		ModsInputRestrictionComponentData() {
		};

		CtrRef<ComponentModInputRestrictionAsset> m_restrictedInput; // 0xD0 (208)
	}; // 0xE0 (224)
}

