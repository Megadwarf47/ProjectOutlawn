///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/GearSlot.h>
#include <fb/LinearTransform.h>
#include <fb/RefArray.h>
#include <fb/SocketType.h>
#include <fb/String.h>

namespace fb {
	class SocketObjectDataBase;
}

namespace fb {
	class SocketData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SocketData"); }
		virtual ~SocketData() override {}
		SocketData() {
			m_boneId = -1;
			m_gearSlot = GearSlot::GearSlot_NotEquipped;
			m_socketType = SocketType::SocketType_Undefined;
			m_excluded = false;
			m_usesDefaultObject = false;
			m_defaultEnableSocketEntities = false;
			m_forceSocketEntitiesEnabled = false;
			m_hideByZoomTransition = false;
			m_hideByLightToggle = false;
		};

		Guid m_unlockAssetGuid; // 0x10 (16)
		Guid m_belongsToUnlockAssetGuid; // 0x20 (32)
		String m_boneName; // 0x30 (48)
		s32 m_boneId; // 0x38 (56)
		LinearTransform m_boneRigidTransform; // 0x40 (64)
		LinearTransform m_transform; // 0x80 (128)
		RefArray<SocketObjectDataBase> m_availableObjects; // 0xC0 (192)
		GearSlot m_gearSlot; // 0xC8 (200)
		SocketType m_socketType; // 0xCC (204)
		bool m_excluded; // 0xD0 (208)
		bool m_usesDefaultObject; // 0xD1 (209)
		bool m_defaultEnableSocketEntities; // 0xD2 (210)
		bool m_forceSocketEntitiesEnabled; // 0xD3 (211)
		bool m_hideByZoomTransition; // 0xD4 (212)
		bool m_hideByLightToggle; // 0xD5 (213)
	}; // 0xE0 (224)
}

