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
	class FakePhysicsData;
}

namespace fb {
	class LoosePartPhysicsData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LoosePartPhysicsData"); }
		virtual ~LoosePartPhysicsData() override {}
		LoosePartPhysicsData() {
		};

		CtrRef<FakePhysicsData> m_fakePhysics; // 0x10 (16)
	}; // 0x18 (24)
}

