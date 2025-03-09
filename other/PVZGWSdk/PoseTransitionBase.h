///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>

namespace fb {
	class PoseDefinition;
}

namespace fb {
	class PoseTransitionBase : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PoseTransitionBase"); }
		virtual ~PoseTransitionBase() override {}
		PoseTransitionBase() {
		};

		CtrRef<PoseDefinition> m_transitionTo; // 0x10 (16)
	}; // 0x18 (24)
}

