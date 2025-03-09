///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BoneComponentData.h>
#include <fb/CtrRef.h>

namespace fb {
	class WingPhysicsData;
}

namespace fb {
	class WingComponentData : public BoneComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WingComponentData"); }
		virtual ~WingComponentData() override {}
		WingComponentData() {
		};

		CtrRef<WingPhysicsData> m_config; // 0x70 (112)
	}; // 0x80 (128)
}

