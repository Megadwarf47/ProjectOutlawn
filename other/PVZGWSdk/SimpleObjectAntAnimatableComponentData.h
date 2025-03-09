///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/LodAntAnimatableComponentData.h>
#include <fb/LodEnableBinding.h>
#include <fb/SimpleObjectBinding.h>

namespace fb {
	class AntEnumeration;
}

namespace fb {
	class SimpleObjectAntAnimatableComponentData : public LodAntAnimatableComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SimpleObjectAntAnimatableComponentData"); }
		virtual ~SimpleObjectAntAnimatableComponentData() override {}
		SimpleObjectAntAnimatableComponentData() {
		};

		Array<LodEnableBinding> m_simpleObjectLodEnables; // 0x180 (384)
		CtrRef<AntEnumeration> m_simpleObjectTypeEnum; // 0x188 (392)
		SimpleObjectBinding m_simpleObjectBinding; // 0x190 (400)
	}; // 0x1B0 (432)
}

