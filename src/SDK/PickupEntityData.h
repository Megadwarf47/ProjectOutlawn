///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/GamePhysicsEntityData.h>
#include <fb/PickupPlayerEnum.h>
#include <fb/String.h>

namespace fb {
	class MeshAsset;
	class ObjectBlueprint;
}

namespace fb {
	class PickupEntityData : public GamePhysicsEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PickupEntityData"); }
		virtual ~PickupEntityData() override {}
		virtual bool getIsNetworkedResource() const override { return true; }
		PickupEntityData() {
			m_timeToShowWeaponMesh = 10.f;
			m_preferredWeaponSlot = 0;
			m_timeToLive = 0.f;
			m_minRandomSpareAmmoPercent = 0;
			m_maxRandomSpareAmmoPercent = 0;
			m_minRandomClipAmmoPercent = 0;
			m_maxRandomClipAmmoPercent = 0;
			m_randomizeAmmoOnDropForPlayer = PickupPlayerEnum::PickupPlayerEnum_AIOnly;
			m_interactionRadius = 2.5f;
			m_displayWithinRadius = 25.f;
			m_tacticalRadius = 200.f;
			m_useWeaponMesh = true;
			m_unspawnOnPickup = false;
			m_unspawnOnAmmoPickup = false;
			m_contentIsStatic = false;
			m_positionIsStatic = false;
			m_allowPickup = true;
			m_ignoreNullWeaponSlots = false;
			m_forceWeaponSlotSelection = true;
			m_displayInMiniMap = true;
			m_hasAutomaticAmmoPickup = true;
			m_replaceAllContent = false;
			m_removeWeaponOnDrop = false;
			m_useDisplayWithinRadius = false;
			m_keepAmmoState = true;
		};

		CtrRef<ObjectBlueprint> m_physicsBlueprint; // 0x90 (144)
		CtrRef<MeshAsset> m_mesh; // 0x98 (152)
		float m_timeToShowWeaponMesh; // 0xA0 (160)
		u32 m_preferredWeaponSlot; // 0xA4 (164)
		float m_timeToLive; // 0xA8 (168)
		String m_iconName; // 0xB0 (176)
		s32 m_minRandomSpareAmmoPercent; // 0xB8 (184)
		s32 m_maxRandomSpareAmmoPercent; // 0xBC (188)
		s32 m_minRandomClipAmmoPercent; // 0xC0 (192)
		s32 m_maxRandomClipAmmoPercent; // 0xC4 (196)
		PickupPlayerEnum m_randomizeAmmoOnDropForPlayer; // 0xC8 (200)
		float m_interactionRadius; // 0xCC (204)
		float m_displayWithinRadius; // 0xD0 (208)
		float m_tacticalRadius; // 0xD4 (212)
		bool m_useWeaponMesh; // 0xD8 (216)
		bool m_unspawnOnPickup; // 0xD9 (217)
		bool m_unspawnOnAmmoPickup; // 0xDA (218)
		bool m_contentIsStatic; // 0xDB (219)
		bool m_positionIsStatic; // 0xDC (220)
		bool m_allowPickup; // 0xDD (221)
		bool m_ignoreNullWeaponSlots; // 0xDE (222)
		bool m_forceWeaponSlotSelection; // 0xDF (223)
		bool m_displayInMiniMap; // 0xE0 (224)
		bool m_hasAutomaticAmmoPickup; // 0xE1 (225)
		bool m_replaceAllContent; // 0xE2 (226)
		bool m_removeWeaponOnDrop; // 0xE3 (227)
		bool m_useDisplayWithinRadius; // 0xE4 (228)
		bool m_keepAmmoState; // 0xE5 (229)
	}; // 0xF0 (240)
}

