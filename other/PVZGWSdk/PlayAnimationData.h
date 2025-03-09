///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntRef.h>
#include <fb/DataContainer.h>

namespace fb {
	class PlayAnimationData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PlayAnimationData"); }
		virtual ~PlayAnimationData() override {}
		PlayAnimationData() {
			m_looping = false;
		};

		AntRef m_controller; // 0x10 (16)
		bool m_looping; // 0x24 (36)
	}; // 0x28 (40)
}

