#ifndef SIRE_RDKIT_H
#define SIRE_RDKIT_H

 #include <cstdint>

#include "GraphMol/GraphMol.h"

#include "SireMol/selectormol.h"

#include "SireBase/propertymap.h"

#include <QList>

namespace SireRDKit
{

    SireMol::SelectorMol rdkit_to_sire(const QList<RDKit::ROMOL_SPTR> &mols,
                                       const SireBase::PropertyMap &map);

    QList<RDKit::ROMOL_SPTR> sire_to_rdkit(const SireMol::SelectorMol &mols,
                                           const SireBase::PropertyMap &map);

    QStringList rdkit_to_smiles(const QList<RDKit::ROMOL_SPTR> &mols,
                                const SireBase::PropertyMap &map);

    QList<RDKit::ROMOL_SPTR> rdkit_remove_hydrogens(const QList<RDKit::ROMOL_SPTR> &mols,
                                                    const SireBase::PropertyMap &map);

    QString rdkit_to_smiles(const RDKit::ROMOL_SPTR &mol,
                            const SireBase::PropertyMap &map);

    RDKit::ROMOL_SPTR rdkit_remove_hydrogens(const RDKit::ROMOL_SPTR &mol,
                                             const SireBase::PropertyMap &map);

    QList<RDKit::ROMOL_SPTR> smiles_to_rdkit(const QStringList &smiles,
                                             const QStringList &labels,
                                             const SireBase::PropertyMap &map);

    RDKit::ROMOL_SPTR smiles_to_rdkit(const QString &smiles,
                                      const QString &label,
                                      const SireBase::PropertyMap &map);

}

#endif
