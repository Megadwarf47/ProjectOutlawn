///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/DynamicDifficultyModifiers.h>

namespace fb {
	class AIWaveDifficulty : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AIWaveDifficulty"); }
		virtual ~AIWaveDifficulty() override {}
		AIWaveDifficulty() {
		};

		DynamicDifficultyModifiers m_soldierMods; // 0x10 (16)
	}; // 0x18 (24)
}

