#pragma once

#include "CoreMinimal.h"
#include "VoxelCommand.h"

// Manages the execution, undo, and redo of commands
class VOXELPLUGIN_API CommandManager
{
public:
    void ExecuteCommand(TSharedPtr<VoxelCommand> Command);
    void Undo();
    void Redo();

private:
    TArray<TSharedPtr<VoxelCommand>> UndoStack;
    TArray<TSharedPtr<VoxelCommand>> RedoStack;
};
