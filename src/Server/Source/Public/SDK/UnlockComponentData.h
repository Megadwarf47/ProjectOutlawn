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
	class UnlockAssetBase;
}

namespace fb {
	class UnlockComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UnlockComponentData"); }
		virtual ~UnlockComponentData() override {}
		UnlockComponentData() {
			m_unlockIdentifier = 0;
			m_unlockDataKey = 0;
			m_invertUnlockTest = false;
			m_unlockableFromAllEntries = false;
			m_deactivateCheckOnEnteringEntry = false;
		};

		CtrRef<UnlockAssetBase> m_unlockAsset; // 0x70 (112)
		Guid m_unlockAssetGuid; // 0x78 (120)
		u32 m_unlockIdentifier; // 0x88 (136)
		u32 m_unlockDataKey; // 0x8C (140)
		bool m_invertUnlockTest; // 0x90 (144)
		bool m_unlockableFromAllEntries; // 0x91 (145)
		bool m_deactivateCheckOnEnteringEntry; // 0x92 (146)
	}; // 0xA0 (160)
}

