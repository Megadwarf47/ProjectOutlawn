///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/CtrRef.h>

namespace fb {
	class EntryInputActionMapsData;
	class InputActionMappingsData;
	class PlayerViewData;
}

namespace fb {
	class PlayerData : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PlayerData"); }
		virtual ~PlayerData() override {}
		PlayerData() {
		};

		CtrRef<PlayerViewData> m_playerView; // 0x18 (24)
		CtrRef<EntryInputActionMapsData> m_inputConceptDefinition; // 0x20 (32)
		CtrRef<InputActionMappingsData> m_inputMapping; // 0x28 (40)
	}; // 0x30 (48)
}

