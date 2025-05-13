///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>
#include <fb/String.h>

namespace fb {
	class FakePhysicsData;
}

namespace fb {
	class BoneFakePhysicsData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BoneFakePhysicsData"); }
		virtual ~BoneFakePhysicsData() override {}
		BoneFakePhysicsData() {
			m_boneId = 0;
		};

		CtrRef<FakePhysicsData> m_fakePhysics; // 0x10 (16)
		String m_boneName; // 0x18 (24)
		s32 m_boneId; // 0x20 (32)
	}; // 0x28 (40)
}

