#pragma once

#include <frc/commands/InstantCommand.h>

/**
 * Attrape un hatch
 * Fin instantanée
 */
class AttraperHatch : public frc::InstantCommand
{
 public:
  AttraperHatch();
  void Initialize() override;
};
