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
	class MixerAsset;
}

namespace fb {
	class MixerEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MixerEntityData"); }
		virtual ~MixerEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		MixerEntityData() {
			m_activateOnCreation = false;
			m_accumulatedInputs = false;
		};

		CtrRef<MixerAsset> m_mixer; // 0x18 (24)
		bool m_activateOnCreation; // 0x20 (32)
		bool m_accumulatedInputs; // 0x21 (33)
	}; // 0x28 (40)
}

