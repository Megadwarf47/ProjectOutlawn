///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/LoosePartPhysicsData.h>

namespace fb {
	class NetworkableLoosePartPhysicsData : public LoosePartPhysicsData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("NetworkableLoosePartPhysicsData"); }
		virtual ~NetworkableLoosePartPhysicsData() override {}
		NetworkableLoosePartPhysicsData() {
			m_networked = false;
		};

		bool m_networked; // 0x18 (24)
	}; // 0x20 (32)
}

