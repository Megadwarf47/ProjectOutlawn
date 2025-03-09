///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/UIScreenRenderingPass.h>
#include <fb/UIViewAsset.h>

namespace fb {
	class UICppScreenData;
	class UIWidgetBlueprint;
}

namespace fb {
	class UIFlowCppScreenData : public UIViewAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIFlowCppScreenData"); }
		virtual ~UIFlowCppScreenData() override {}
		UIFlowCppScreenData() {
			m_renderPass = UIScreenRenderingPass::UIScreenRenderingPass_BelowFlash;
			m_renderTarget = false;
		};

		UIScreenRenderingPass m_renderPass; // 0x50 (80)
		CtrRef<UICppScreenData> m_screenData; // 0x58 (88)
		CtrRef<UIWidgetBlueprint> m_rootWidget; // 0x60 (96)
		bool m_renderTarget; // 0x68 (104)
	}; // 0x70 (112)
}

