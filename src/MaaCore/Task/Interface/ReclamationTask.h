#pragma once
#include "Task/InterfaceTask.h"

namespace asst
{
    class ProcessTask;

    class ReclamationTask : public InterfaceTask
    {
    public:
        inline static constexpr std::string_view TaskType = "ReclamationAlgorithm";

        ReclamationTask(const AsstCallback& callback, Assistant* inst);
        virtual ~ReclamationTask() override = default;

        //virtual bool set_params(const json::value& params) override;

    private:
        std::shared_ptr<ProcessTask> m_reclamation_task_ptr = nullptr;
    };
}
