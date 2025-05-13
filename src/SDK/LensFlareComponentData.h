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
	class LensFlareEntityData;
}

namespace fb {
	class LensFlareComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LensFlareComponentData"); }
		virtual ~LensFlareComponentData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		LensFlareComponentData() {
		};

		CtrRef<LensFlareEntityData> m_lensFlare; // 0x70 (112)
	}; // 0x80 (128)
}

