///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>

namespace fb {
	class PathCreationOptions : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PathCreationOptions"); }
		virtual ~PathCreationOptions() override {}
		PathCreationOptions() {
			m_performInitialNavProbe = false;
			m_performAdditionalSmoothing = false;
			m_forceFirstPosOntoNavGraph = false;
		};

		bool m_performInitialNavProbe; // 0x18 (24)
		bool m_performAdditionalSmoothing; // 0x19 (25)
		bool m_forceFirstPosOntoNavGraph; // 0x1A (26)
	}; // 0x20 (32)
}

