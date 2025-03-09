///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/SoundDataReadTarget.h>
#include <fb/SoundDataReleaseBehavior.h>
#include <fb/SoundDataRequestBehavior.h>
#include <fb/String.h>

namespace fb {
	class SoundDataPolicy : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoundDataPolicy"); }
		virtual ~SoundDataPolicy() override {}
		SoundDataPolicy() {
			m_requestBehavior = SoundDataRequestBehavior::SoundDataRequestBehavior_Explicit;
			m_releaseBehavior = SoundDataReleaseBehavior::SoundDataReleaseBehavior_Explicit;
			m_primeTarget = SoundDataReadTarget::SoundDataReadTarget_Secondary;
			m_requestTarget = SoundDataReadTarget::SoundDataReadTarget_Secondary;
		};

		String m_name; // 0x10 (16)
		SoundDataRequestBehavior m_requestBehavior; // 0x18 (24)
		SoundDataReleaseBehavior m_releaseBehavior; // 0x1C (28)
		SoundDataReadTarget m_primeTarget; // 0x20 (32)
		SoundDataReadTarget m_requestTarget; // 0x24 (36)
	}; // 0x28 (40)
}

