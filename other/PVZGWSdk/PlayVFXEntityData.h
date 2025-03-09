///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/EntityData.h>
#include <fb/LinearTransform.h>
#include <fb/VFXLocationControl.h>

namespace fb {
	class EffectBlueprint;
}

namespace fb {
	class PlayVFXEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PlayVFXEntityData"); }
		virtual ~PlayVFXEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		PlayVFXEntityData() {
		};

		CtrRef<EffectBlueprint> m_visualEffect; // 0x18 (24)
		VFXLocationControl m_effectLocation; // 0x20 (32)
		VFXLocationControl m_source; // 0x70 (112)
		VFXLocationControl m_target; // 0xC0 (192)
		VFXLocationControl m_other; // 0x110 (272)
		LinearTransform m_transformEffectLocation; // 0x160 (352)
		LinearTransform m_transformSource; // 0x1A0 (416)
		LinearTransform m_transformTarget; // 0x1E0 (480)
		LinearTransform m_transformOther; // 0x220 (544)
	}; // 0x260 (608)
}

