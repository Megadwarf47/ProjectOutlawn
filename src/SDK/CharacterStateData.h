///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/RefArray.h>

namespace fb {
	class CharacterStatePoseInfo;
}

namespace fb {
	class CharacterStateData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CharacterStateData"); }
		virtual ~CharacterStateData() override {}
		CharacterStateData() {
		};

		RefArray<CharacterStatePoseInfo> m_poseInfo; // 0x10 (16)
	}; // 0x18 (24)
}

