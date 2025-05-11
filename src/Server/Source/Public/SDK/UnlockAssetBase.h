///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainerPolicyAsset.h>
#include <fb/String.h>
#include <fb/UnlockAvailability.h>

namespace fb {
	class UnlockAssetBase;
	class UnlockUserDataBase;
}

namespace fb {
	class UnlockAssetBase : public DataContainerPolicyAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UnlockAssetBase"); }
		virtual ~UnlockAssetBase() override {}
		UnlockAssetBase() {
			m_identifier = 0;
			m_unlockScore = 0;
			m_availableForPlayer = UnlockAvailability::UnlockAvailability_All;
			m_autoAvailable = false;
			m_hiddenInProgression = false;
		};

		CtrRef<UnlockUserDataBase> m_unlockUserData; // 0x18 (24)
		String m_debugUnlockId; // 0x20 (32)
		u32 m_identifier; // 0x28 (40)
		u32 m_unlockScore; // 0x2C (44)
		CtrRef<UnlockAssetBase> m_nextLevelUnlockAsset; // 0x30 (48)
		UnlockAvailability m_availableForPlayer; // 0x38 (56)
		bool m_autoAvailable; // 0x3C (60)
		bool m_hiddenInProgression; // 0x3D (61)
	}; // 0x40 (64)
}

