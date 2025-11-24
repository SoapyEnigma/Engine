local dep = Solution.Util.CreateDepTable("MiniAudio", {})

Solution.Util.CreateDep(dep.Name, dep.Dependencies, function()
    Solution.Util.SetIncludes(dep.Path)
    Solution.Util.SetDefines({ "MINIAUDIO_IMPLEMENTATION" })
end)
