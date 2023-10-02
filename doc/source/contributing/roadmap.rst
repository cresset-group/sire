=======
Roadmap
=======

:mod:`sire` uses a ``main``, ``devel`` and ``future`` development process, using feature branches
for all code development.

* ``main`` - this always contains the latest official release.
* ``devel`` - this always contains the latest development release, which will become the next official release.
* ``future`` - this contains pull requests that have been accepted, but which are targetted for a future release (i.e. not the next official release)

Code should be developed on a fork or in a feature branch. When your feature is ready, please submit
a pull request against ``devel``. This will trigger our CI process, which will build :mod:`sire` on
all of the platforms that we support. Assuming this completes successfully, then one of the 
release team will conduct a code review. The outcome of the review will be one of the following;

1. This feature is ready, and should be part of the next official release. The pull request will be accepted into ``devel``.
   This will trigger our CI/CD process, building the new dev package and uploading it to anaconda.org
   for everyone to use.

2. This feature is good, but it is not yet ready to be part of the next offical release. This could be because
   the feature is part of a series, and all of the series need to be finished before release. Or because
   we are in a feature freeze period. Or because you want more time for people to explore and play with
   the feature before it is officially released (and would then need to be supported, and backwards
   compatibility maintained). If this is the case (or it is your request) then the pull request
   will be redirected into the ``future`` branch. Once it (and features that depend on it) are ready,
   you can then issue a pull request for all of the features at once into ``devel``. It will be 
   noted that each of the individual parts have already been code reviewed, so the process to 
   accept the combination into ``devel`` should be more straightforward.

3. This feature is good, but more work is needed before it can be accepted. This could be 
   because some of the unit tests haven't passed, or the latest version of ``devel`` hasn't
   been merged. Or there may be changes that are requested that would make the code easier
   to maintain or to preserve backwards compatibility. If this is the case, then we 
   will engage in conversation with you and will work together to rectify any issues.

Release Timetable
=================

We use a calendar-based version numbering system, based on regular release cadence of several
releases per year.

Our aim is to make a major release every other month (so six releases per year). Each release will be
numbered sequentially, e.g. ``2023.1.0`` is the first release of 2023, ``2023.2.0`` is the 
second release. Our aim is that new functionality only appears in these "major" releases.

Bugs and issues are a constant of software engineering. We will aim to fix these as quickly as possible.
Bugfixes will be made in ``fix_issue`` branches, numbered according to the GitHub issue in which they 
were raised (hence why we ask that each bug / issue is separately raised in its own GitHub issue).

These bugfixes will be accepted into ``devel`` as soon as they are ready, meaning that they will
automatically be included in the next new major release. However, these fixes can sometimes be 
needed more quickly, and they cannot wait for 8 or so weeks between major releases. For these
cases, we will backport the fix into the last major release, and will issue a "point" release.
These will be numbered sequentially using the "patch" version number, e.g. 
``2023.1.0`` is the first major release in 2023, while ``2023.1.1`` is the first patch release
containing bugfixes for ``2023.1.0``. Our aim is to ensure that patch releases DO NOT include
new functionality. They only include bug, documentation or issue fixes. We know that this
has not been the case currently, but it is the plan and ambition for the ``2023.2.0``
releases onwards.

The planned major releases in 2023 will be;

* 2023.1.0 - January
* 2023.2.0 - March
* 2023.3.0 - May
* 2023.4.0 - July
* 2023.5.0 - September
* 2023.6.0 - November

We will aim to make each release by the end of the indicated month. Each release will be preceeded by 
a one-week feature freeze and testing period. This is short as ``devel`` should always contain
a valid and tested version of :mod:`sire`. This will be further tested via integration 
tests in `sire_bigtests <https://github.com/OpenBioSim/sire_bigtests>`__ before being 
merged into ``main`` for the next official release.

How to track development
========================

You can keep up with what we are working on in several ways;

* Keep an eye on the ``devel`` branch to see what is being merged in. Perhaps use the latest ``dev`` package from anaconda.
* Keep an eye on the various ``feature_X`` branches as they appear in the repository. Feel free to initiate
  a conversation on GitHub with the developer who is working on that branch if you want to learn more, or 
  want to make suggestions or offer a helping hand.
* Clone and build your own copy of the ``future`` branch. This is the bleeding edge, and things may change and break.
  But it is the earliest way to use the future version of :mod:`sire`.

Wishlists / suggestions
=======================

If you would like to suggest features that should be
added to the roadmap then please
`raise a feature request here <https://github.com/openbiosim/sire/issues/new?assignees=chryswoods&labels=enhancement&template=feature_request.md&title=%5BFEATURE+REQUEST%5D+-+I%27d+like+Sire+to>`_.

More details about individual feature branches, which contain the new
features being actively worked on, is available on the
`GitHub issues <https://github.com/openbiosim/sire/issues?q=is%3Aissue+is%3Aopen+label%3Afeature-branch>`_
page.
