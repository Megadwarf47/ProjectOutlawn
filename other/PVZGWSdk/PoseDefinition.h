///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntRef.h>
#include <fb/DataContainer.h>
#include <fb/RefArray.h>

namespace fb {
	class PoseTransitionBase;
}

namespace fb {
	class PoseDefinition : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PoseDefinition"); }
		virtual ~PoseDefinition() override {}
		PoseDefinition() {
			m_animationDuration = 0.f;
		};

		AntRef m_animation; // 0x10 (16)
		float m_animationDuration; // 0x24 (36)
		RefArray<PoseTransitionBase> m_transitions; // 0x28 (40)
	}; // 0x30 (48)
}

