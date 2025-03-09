///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BTEvalFunc.h>
#include <fb/CtrRef.h>

namespace fb {
	class BuffData;
}

namespace fb {
	class BT_IsBuffActive : public BTEvalFunc {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BT_IsBuffActive"); }
		virtual ~BT_IsBuffActive() override {}
		BT_IsBuffActive() {
		};

		CtrRef<BuffData> m_buff; // 0x20 (32)
	}; // 0x28 (40)
}

