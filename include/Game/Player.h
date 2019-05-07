#pragma once

#include "types.h"

namespace Game {
    class Player {
        public:
        enum ResultAnim{
            Win, Lose, CoopWin, CoopLose
        };

        void start_MissionAppear();
        void change_DemoPlaceAnim(Game::Player::ResultAnim, int);


    };
};