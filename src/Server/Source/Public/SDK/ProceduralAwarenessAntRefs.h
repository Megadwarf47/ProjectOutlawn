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
	class ProceduralAwarenessAntRefs : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ProceduralAwarenessAntRefs"); }
		virtual ~ProceduralAwarenessAntRefs() override {}
		ProceduralAwarenessAntRefs() {
		};

		AntRef m_proceduralAwarenessActive; // 0x10 (16)
		AntRef m_proceduralAwarenessHumanIKActive; // 0x24 (36)
		AntRef m_proceduralAwarenessData; // 0x38 (56)
	}; // 0x50 (80)
}

