<h2>Code to Import Files into a New Repo</h2>
<pre><code>
cd ~/NEWREPO
git remote add OLDREPO https://github.com/xxyoohoo/OLDREPO.git
git fetch OLDREPO
git checkout -b import-OLDREPO
git read-tree --prefix=OLDREPO/ -u OLDREPO/main
git commit -m "Import OLDREPO repo into OLDREPO/ subfolder"
git checkout main
git merge import-OLDREPO --allow-unrelated-histories
git push origin main
</code></pre>
