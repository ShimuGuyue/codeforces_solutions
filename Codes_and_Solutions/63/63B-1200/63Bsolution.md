等级为 k 的士兵已经提升到了最高等级，将他们从训练中剔除掉
由于每次训练中，每个等级 x 只有一个士兵可以升级，
因此同等级 x 的其余士兵在下次训练开始时仍是 x 等级，
因此若 x - 1 等级没有士兵，可将其等级 x 等价于 x - 1，训练一次后到达等级 x，
若 x - 1 等级存在其他士兵，则继续等价，将等级等价为最小
等级从高到底依次等价，找出等价后所有士兵中（所有士兵等级都不同）最小的等级（可以为负数）
ans 为 k - 等价最小等级