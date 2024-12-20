#include <gtest/gtest.h>
#include "Weapon.h"
#include "Vehicle.h"
#include "Transformer.h"
#include "Megatron.h"
#include "Bumblebee.h"
#include "OptimusPrime.h"
#include <sstream>

TEST(TransformerTest, DefaultConstructor) {
    Transformer t;
    EXPECT_EQ(t.getLevel(), 1);
    EXPECT_EQ(t.getStrength(), 100);
    EXPECT_EQ(t.getRange(), 5);
    EXPECT_EQ(t.getFuel(), 100);
    EXPECT_EQ(t.getAmmo(), 100);
    EXPECT_EQ(t.getWeapon().getType(), "Default Weapon");
    EXPECT_EQ(t.getWeapon().getDamage(), 10);
}

TEST(TransformerTest, SetGetLevel) {
    Transformer t;
    t.setLevel(10);
    EXPECT_EQ(t.getLevel(), 10);
}

TEST(TransformerTest, SetGetStrength) {
    Transformer t;
    t.setStrength(200);
    EXPECT_EQ(t.getStrength(), 200);
}

TEST(TransformerTest, SetGetRange) {
    Transformer t;
    t.setRange(20);
    EXPECT_EQ(t.getRange(), 20);
}

TEST(TransformerTest, SetGetFuel) {
    Transformer t;
    t.setFuel(50);
    EXPECT_EQ(t.getFuel(), 50);
}

TEST(TransformerTest, SetGetAmmo) {
    Transformer t;
    t.setAmmo(30);
    EXPECT_EQ(t.getAmmo(), 30);
}

TEST(TransformerTest, SetGetWeapon) {
    Transformer t;
    Weapon newWeapon("Laser Cannon", 75);
    t.setWeapon(newWeapon);

    EXPECT_EQ(t.getWeapon().getType(), "Laser Cannon");
    EXPECT_EQ(t.getWeapon().getDamage(), 75);
}

TEST(TransformerTest, AssignVehicle) {
    Transformer t;
    Vehicle vehicle("Camaro", 200);
    t.assignVehicle(&vehicle);

    EXPECT_EQ(t.getVehicle()->getName(), "Camaro");
    EXPECT_EQ(t.getVehicle()->getSpeed(), 200);
}

TEST(TransformerTest, Move) {
    Transformer t;
    EXPECT_TRUE(t.move());
}

TEST(TransformerTest, Jump) {
    Transformer t;
    EXPECT_TRUE(t.jump());
}


TEST(MegatronTest, Constructor) {
    Megatron m;
    EXPECT_EQ(m.getLevel(), 1); 
    EXPECT_EQ(m.getStrength(), 100);  
    EXPECT_EQ(m.getRange(), 5);  
    EXPECT_EQ(m.getFuel(), 100);  
    EXPECT_EQ(m.getAmmo(), 100);  
    EXPECT_EQ(m.getDestructionPower(), 300);
    EXPECT_EQ(m.getTankArmor(), 250); 
}

TEST(MegatronTest, TransformToTank) {
    Megatron m;
    EXPECT_TRUE(m.transformToTank());  
}

TEST(MegatronTest, TransformToRobot) {
    Megatron m;
    EXPECT_TRUE(m.transformToRobot());  
}

TEST(MegatronTest, SetGetDestructionPower) {
    Megatron m;
    m.setDestructionPower(500);
    EXPECT_EQ(m.getDestructionPower(), 500);
}

TEST(MegatronTest, SetGetTankArmor) {
    Megatron m;
    m.setTankArmor(200);
    EXPECT_EQ(m.getTankArmor(), 200);
}

TEST(BumblebeeTest, Constructor) {
    Bumblebee b;
    EXPECT_EQ(b.getLevel(), 1); 
    EXPECT_EQ(b.getStrength(), 100);  
    EXPECT_EQ(b.getRange(), 5); 
    EXPECT_EQ(b.getFuel(), 100);  
    EXPECT_EQ(b.getAmmo(), 100);  
    EXPECT_EQ(b.getCamaroSpeed(), 150);  
    EXPECT_EQ(b.getCamaroColor(), "Yellow");  
}


TEST(BumblebeeTest, SetGetCamaroSpeed) {
    Bumblebee b;
    b.setCamaroSpeed(200);
    EXPECT_EQ(b.getCamaroSpeed(), 200);
}


TEST(BumblebeeTest, SetGetCamaroColor) {
    Bumblebee b;
    b.setCamaroColor("Red");
    EXPECT_EQ(b.getCamaroColor(), "Red");
}


TEST(OptimusPrimeTest, Constructor) {
    OptimusPrime op;
    EXPECT_EQ(op.getLevel(), 1); 
    EXPECT_EQ(op.getStrength(), 100);  
    EXPECT_EQ(op.getRange(), 5); 
    EXPECT_EQ(op.getFuel(), 100); 
    EXPECT_EQ(op.getAmmo(), 100); 
    EXPECT_EQ(op.getTruckSpeed(), 0); 
    EXPECT_EQ(op.getArmorStrength(), 0); 
    EXPECT_EQ(op.getLeadershipLevel(), 0); 
}


TEST(OptimusPrimeTest, SetGetTruckSpeed) {
    OptimusPrime op;
    op.setTruckSpeed(120);
    EXPECT_EQ(op.getTruckSpeed(), 120);
}


TEST(OptimusPrimeTest, SetGetArmorStrength) {
    OptimusPrime op;
    op.setArmorStrength(250);
    EXPECT_EQ(op.getArmorStrength(), 250);
}


TEST(OptimusPrimeTest, SetGetLeadershipLevel) {
    OptimusPrime op;
    op.setLeadershipLevel(15);
    EXPECT_EQ(op.getLeadershipLevel(), 15);
}


TEST(OptimusPrimeTest, TransformToTruck) {
    OptimusPrime op;
    EXPECT_TRUE(op.transformToTruck()); 
}


TEST(OptimusPrimeTest, TransformToRobot) {
    OptimusPrime op;
    EXPECT_TRUE(op.transformToRobot());  
}
