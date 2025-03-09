///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/GameComponentData.h>

namespace fb {
	class LocalLightEntityData;
}

namespace fb {
	class LightComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LightComponentData"); }
		virtual ~LightComponentData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		LightComponentData() {
		};

		CtrRef<LocalLightEntityData> m_light; // 0x70 (112)
	}; // 0x80 (128)
}

