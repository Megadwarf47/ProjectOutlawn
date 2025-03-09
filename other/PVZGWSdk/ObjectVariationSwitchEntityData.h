///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/EntityData.h>

namespace fb {
	class ObjectVariation;
}

namespace fb {
	class ObjectVariationSwitchEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ObjectVariationSwitchEntityData"); }
		virtual ~ObjectVariationSwitchEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		ObjectVariationSwitchEntityData() {
		};

		CtrRef<ObjectVariation> m_variation1; // 0x18 (24)
		CtrRef<ObjectVariation> m_variation2; // 0x20 (32)
	}; // 0x28 (40)
}

