///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/EntityData.h>
#include <fb/WaveDifficultyOperation.h>

namespace fb {
	class AIWaveDifficulty;
}

namespace fb {
	class AIWaveDifficultyEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AIWaveDifficultyEntityData"); }
		virtual ~AIWaveDifficultyEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		AIWaveDifficultyEntityData() {
			m_operation = WaveDifficultyOperation::WaveDifficultyOperation_Add;
		};

		CtrRef<AIWaveDifficulty> m_defaultValue; // 0x18 (24)
		WaveDifficultyOperation m_operation; // 0x20 (32)
		CtrRef<AIWaveDifficulty> m_modifierValue; // 0x28 (40)
	}; // 0x30 (48)
}

