modded class CP_Workbench
{
      //how many nails per day will it consume | it needs to be higher than 0 to decay (optimization to prevent it from unnecessarily decaying all items)
    override float GetCostToUpkeep()
    {
        return 0.00001;
    }

    // time until it decays full in seconds | default is 24 hours
    override float GetTimeToDecay()
    {
        return 24.0 * 60.0 * 60.0;
    }
};
modded class CP_DryPost
{
      //how many nails per day will it consume | it needs to be higher than 0 to decay (optimization to prevent it from unnecessarily decaying all items)
    override float GetCostToUpkeep()
    {
        return 0.00001;
    }

    // time until it decays full in seconds | default is 24 hours
    override float GetTimeToDecay()
    {
        return 24.0 * 60.0 * 60.0;
    }
};
modded class CP_PlasticWrapper
{
      //how many nails per day will it consume | it needs to be higher than 0 to decay (optimization to prevent it from unnecessarily decaying all items)
    override float GetCostToUpkeep()
    {
        return 0.00001;
    }

    // time until it decays full in seconds | default is 24 hours
    override float GetTimeToDecay()
    {
        return 24.0 * 60.0 * 60.0;
    }
};
modded class CP_Bagger
{
      //how many nails per day will it consume | it needs to be higher than 0 to decay (optimization to prevent it from unnecessarily decaying all items)
    override float GetCostToUpkeep()
    {
        return 0.00001;
    }

    // time until it decays full in seconds | default is 24 hours
    override float GetTimeToDecay()
    {
        return 24.0 * 60.0 * 60.0;
    }
};
