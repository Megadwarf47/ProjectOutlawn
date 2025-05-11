///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainerPolicyAsset.h>
#include <fb/RefArray.h>

namespace fb {
	class BuffEffectData;
	class BuffRestrictorData;
	class BuffStateControllerData;
}

namespace fb {
	class BuffData : public DataContainerPolicyAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BuffData"); }
		virtual ~BuffData() override {}
		BuffData() {
			m_unique = true;
		};

		CtrRef<BuffStateControllerData> m_buffStateController; // 0x18 (24)
		RefArray<BuffRestrictorData> m_buffRestrictors; // 0x20 (32)
		RefArray<BuffEffectData> m_buffEffects; // 0x28 (40)
		bool m_unique; // 0x30 (48)
	}; // 0x38 (56)
}

